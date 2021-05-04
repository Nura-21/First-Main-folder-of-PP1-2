# Paint
import pygame, random
import os

pygame.init()

# (x1, y1), (x2, y2)
# A = y2 - y1
# B = x1 - x2
# C = x2 * y1 - x1 * y2
# Ax + By + C = 0
# (x - x1) / (x2 - x1) = (y - y1) / (y2 - y1)

def drawLine(screen, start, end, width, color):
    x1 = start[0]
    y1 = start[1]
    x2 = end[0]
    y2 = end[1]

    dx = abs(x1 - x2)
    dy = abs(y1 - y2)

    A = y2 - y1
    B = x1 - x2
    C = x2 * y1 - x1 * y2

    if dx > dy:
        if x1 > x2:
            x1, x2 = x2, x1
            y1, y2 = y2, y1

        for x in range(x1, x2):
            y = (-C - A * x) / B
            pygame.draw.circle(screen, color, (x, y), width)
    else:
        if y1 > y2:
            x1, x2 = x2, x1
            y1, y2 = y2, y1
        for y in range(y1, y2):
            x = (-C - B * y) / A
            pygame.draw.circle(screen, color, (x, y), width)

screen = pygame.display.set_mode((800, 600))
background = pygame.Surface((800,600))
background.fill((255,255,255))
screen.blit(background,(0,0))   

def main():
    
    mode = 'random'
    draw_on = False
    clear_on = False
    save = False
    last_pos = (0, 0)
    color = (255, 128, 0)
    radius = 10 
    font_big = pygame.font.Font(None , 20)
    font_small = pygame.font.Font(None , 16)

    colors = {
        'red': (255, 0, 0),
        'blue': (0, 0, 255),
        'green': (0, 255, 0)
    }
    tool = 1
    while True:
        rect_pos = pygame.Rect(20,10,40,30)
        rx,ry = pygame.mouse.get_pos()
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                return   
            if event.type == pygame.KEYDOWN:
                # SAVE IMAGE
                if event.key == pygame.K_ESCAPE:                     
                    save = True
                if event.key == pygame.K_y and save:    
                    pygame.image.save(background,os.path.join("images","saved_3.BMP"))
                    return
                if event.key == pygame.K_n and save:
                    return      
                #CHANGE COLOR         
                if event.key == pygame.K_r:
                    mode = 'red'  
                if event.key == pygame.K_b:
                    mode = 'blue'
                if event.key == pygame.K_g:
                    mode = 'green'
                if event.key == pygame.K_UP:
                    radius += 1
                if event.key == pygame.K_DOWN:
                    radius -= 1
                #RECTANGLE AND CIRCLE
                if event.key == pygame.K_e: # Оширгиш
                    tool = 0
                if event.key == pygame.K_d: #Обычная кисть
                    tool = 1
                if event.key == pygame.K_1:
                    tool = 2
                if event.key == pygame.K_2:
                    tool = 3       
            if event.type == pygame.MOUSEBUTTONDOWN:
                if tool == 0:
                    #if event.button == 3:                                    #RUBBER
                    pygame.draw.circle(background,(255,255,255), event.pos, radius)
                    clear_on = True
                if tool == 1:
                    if mode == 'random':
                        color = (random.randrange(256), random.randrange(256), random.randrange(256))
                    else:
                        color = colors[mode]
                    pygame.draw.circle(background, color, event.pos, radius)
                    draw_on = True
                if tool == 2:
                    drawRectangle(color,event.pos[0],event.pos[1],radius * 2, radius * 2)
                    draw_on = True
                if tool == 3:
                    drawCircle(color,event.pos[0],event.pos[1],radius) 
                    draw_on = True
            if event.type == pygame.MOUSEBUTTONUP:
                draw_on = False
                clear_on = False

            if event.type == pygame.MOUSEMOTION:
                if tool == 0 :
                    if clear_on:
                        drawLine(background, last_pos, event.pos, radius,(255,255,255))   
                elif tool == 1:
                    if draw_on:
                        drawLine(background, last_pos, event.pos, radius, color)
                        # pygame.draw.circle(screen, color, event.pos, radius)
                elif tool == 2:
                    if draw_on:   
                        drawRectangle(color,event.pos[0],event.pos[1],radius * 2, radius * 2)
                elif tool == 3:
                    if draw_on:
                        drawCircle(color,event.pos[0],event.pos[1],radius)
                        
                last_pos = event.pos 
        screen.fill((49,51,53))
        if save:
            pygame.draw.rect(screen,(255,255,255),(650,5,150,40))
            text = font_big.render("Do you want to save ?", True,(0,0,0))
            text_yes = font_small.render("type y if yes", True,(0,0,0))
            text_no = font_small.render("type n if no", True,(0,0,0))
            screen.blit(text,(655,10))
            screen.blit(text_yes,(655,20))
            screen.blit(text_no,(655,32))

        pygame.draw.rect(screen,(255,255,255),rect_pos,2) 
        pygame.draw.circle(screen,(255,255,255),(90,25),20,2)
        
        text = font_small.render("     1  ", True, (255,255,255))
        screen.blit(text,(21,15))
        text = font_small.render("     2  ", True, (255,255,255))
        screen.blit(text,(70,15))
        
        screen.blit(background,(0,50))            
        pygame.display.flip()
        

    pygame.quit()


def drawRectangle( color, x, y, w, h):
    pygame.draw.rect(background, color, [x - w/2 , y - h / 2, w, h], 5)
def drawCircle( color, x, y,rad):
    pygame.draw.circle(background, color, (x, y), rad, 3)

main()