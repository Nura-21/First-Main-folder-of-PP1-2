import pygame
import math

width = 600
height = 400

screen = pygame.display.set_mode((width, height))

    
run = True
while run:
    screen.fill((255,255,255))

    xrange = width - 200

    cos_points = []
    sin_points = []
    #points of cosine
    for x in range(xrange):
        y = 100 *  math.cos((x + 100) / 400  *  (6 * math.pi)) # 6 * pi = деген abs(3pi - (-3pi)) = 6pi сол кезде нужный график шыгад
        cos_points.append((x + 100,y + 200))#100,150 деген козгалту ушин
    #points of sin
    for x in range(xrange):
        y = 100 *  math.sin((x + 200) / 400  *  (6 * math.pi)) # 6 * pi = деген abs(3pi - (-3pi)) = 6pi сол кезде нужный график шыгад
        sin_points.append((x + 100,y + 200))#100,150 деген козгалту ушин

    pygame.draw.aalines(screen,(0,0,0),False,cos_points)
    pygame.draw.aalines(screen,(0,0,0),False,sin_points)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False
    pygame.display.flip()