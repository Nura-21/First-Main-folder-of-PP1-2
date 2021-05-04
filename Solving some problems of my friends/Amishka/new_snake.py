import pygame
import random
import time
import pickle
from snake_class import Snake
from food_class import Food
pygame.init()

WHITE = (255, 255, 255)
YELLOW = (255, 255, 102)
BLACK = (0, 0, 0)
RED = (213, 50, 80)
GREEN = (0, 255, 0)
BLUE = (50, 153, 213)

WIDTH = 640
HEIGHT = 480
surface = pygame.display.set_mode((WIDTH, HEIGHT))

pygame.display.set_caption('Simple Snake game')
 
FPS = pygame.time.Clock()
 
block_size = 16

save_name = 'snake_save.data'
font = pygame.font.Font(None, 32)
wall_image = pygame.image.load("wall.png")
def message(msg, color,y = 100):
    text = font.render(msg, True, color)
    position = text.get_rect(center=(WIDTH // 2, (HEIGHT  + y - 100) // 2))
    surface.blit(text, position)

main_menu = True
next_level_counter = 15
game_speed = 10
level_counter = 0
difficulty = 2
difficulty_made = False
win = False
buttons1 = {"LEFT" : pygame.K_a , "RIGHT" : pygame.K_d, "UP" : pygame.K_w , "DOWN" : pygame.K_s}
buttons2 = {"LEFT" : pygame.K_LEFT , "RIGHT" : pygame.K_RIGHT, "UP" : pygame.K_UP , "DOWN" : pygame.K_DOWN}
while main_menu:
    surface.fill(WHITE)
    menu_text = font.render("PRESS SPACE TO START, L to LOAD SAVE",True,BLACK)
    level_text = font.render("1 - Easy, 2 - Medium, 3 - Hard",True,BLACK)
    surface.blit(menu_text,(100,HEIGHT/2 - 20))
    surface.blit(level_text,(160,HEIGHT/2 + 20))
    game_run = True
    close_menu = True
    new_game = True
    snakes = []
    pygame.display.flip() 
    while close_menu:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                main_menu = False
                close_menu = False
                game_run = False
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_SPACE:
                    game_run = True
                    close_menu = False
                    new_game = True
                if event.key == pygame.K_l:
                    try:
                        with open(save_name, 'br') as f:
                            snakes = pickle.load(f)
                        new_game = False
                        difficulty_made = True
                    except Exception as e:
                        new_game = True
                    game_run = True
                    close_menu = False
                if event.key == pygame.K_1:
                    difficulty = "easy"
                    difficulty_made = True
                if event.key == pygame.K_2:
                    difficulty = 'medium'
                    difficulty_made = True
                if event.key == pygame.K_3:
                    difficulty = 'hard'
                    difficulty_made = True
    if new_game:        
        snake_1 = Snake((WIDTH/2 + 2 * block_size,HEIGHT/2 - block_size), surface,block_size)
        snake_2 = Snake((WIDTH/2 - 3 * block_size,HEIGHT/2 - block_size), surface,block_size)
        level_counter = 0
    else:
        snake_1 = snakes['first_snake']
        snake_2 = snakes['second_snake']
        level_counter = snakes['level_cnt']
        difficulty = snakes['dif']
    if not difficulty_made:
        difficulty = 'medium'
    food = Food(surface,block_size,WIDTH,HEIGHT)
    food2 = Food(surface,block_size,WIDTH,HEIGHT)
    level_names = ["map.txt","map2.txt","map3.txt"]
    walls_point = []
    if difficulty == 'easy':
        next_level_counter = 10
        game_speed = 8
    if difficulty == 'medium':
        next_level_counter = 20
        game_speed = 12
    if difficulty == 'hard':
        next_level_counter = 30
        game_speed = 14
    while game_run:
        game_over = False
        lost = False
        walls_point = []
        time.sleep(1)
        if new_game:
            snake_list_1 = []
            snake_list_2 = []
        else:
            snake_list_1 = snakes['snake_list1']
            snake_list_2 = snakes['snake_list2']
        while not game_over:
            surface.fill(BLACK)
            keys = pygame.key.get_pressed()
            snake_1.move(keys,buttons1)
            snake_2.move(keys,buttons2)
            snake_1.draw(block_size, snake_list_1,GREEN)
            snake_2.draw(block_size, snake_list_2,YELLOW)
            snake_list_1.append((snake_1.x,snake_1.y))
            snake_list_2.append((snake_2.x,snake_2.y))
            if len(snake_list_1) > snake_1.l:
                del snake_list_1[0]
            if len(snake_list_2) > snake_2.l:
                del snake_list_2[0]
            if snake_1.l - 1 > next_level_counter or snake_2.l > next_level_counter:  
                level_counter += 1
                new_game = True
                snake_1.update()
                snake_2.update()
                food.update()
                game_over = True
                game_run = True

            map = open(level_names[level_counter],'r').readlines()
            for i in range(len(map)):
                for j in range(len(map[i])):
                    if map[i][j] == "1":
                        walls_point.append((j * block_size,i * block_size))
                        surface.blit(wall_image , (j * block_size,i * block_size))


            for x in snake_list_1[:-1]:
                if x == (snake_1.x,snake_1.y):
                    lost = True
                    win = False
            for x in snake_list_2[:-1]:
                if x == (snake_2.x,snake_2.y):
                    lost = True
                    win = False
            for i in snake_list_1:
                for j in snake_list_2:
                    if i == j:
                        lost = True
                        win = False
            food.draw()
            food2.draw()
            if (snake_1.x >= WIDTH or snake_1.x < 0 or snake_1.y >= HEIGHT or snake_1.y < 0) or (snake_2.x >= WIDTH or snake_2.x < 0 or snake_2.y >= HEIGHT or snake_2.y < 0):
                    lost = True
                    win = False
            for i in walls_point:
                if (i[0] == snake_1.x and i[1] == snake_1.y) or (i[0] == snake_2.x and i[1] == snake_2.y):
                    lost = True
                    win = False 
            if (snake_1.x == food.x and snake_1.y == food.y):
                food.update()
                snake_1.l += 1
            if (snake_1.x == food2.x and snake_1.y == food2.y):
                food2.update()
                snake_1.l += 1
            if (snake_2.x == food.x and snake_2.y == food.y): 
                food.update()
                snake_2.l += 1
            if (snake_2.x == food2.x and snake_2.y == food2.y):
                food2.update()
                snake_2.l += 1
            for xy in snake_list_1:
                if xy == (food.x,food.y):
                    food.update()
                if xy == (food2.x,food2.y):
                    food2.update()
            for xy in snake_list_2:
                if xy == (food.x,food.y):
                    food.update()
                if xy == (food2.x,food2.y):
                    food2.update()
            for xy in walls_point:
                if xy == (food.x,food.y):
                    food.update()
                if xy == (food2.x,food2.y):
                    food2.update()
            if food.x == food2.x and food.y == food2.y:
                food.update()


            score_1 = font.render(f"Score P1 {snake_1.l - 1}",True,WHITE)
            score_2 = font.render(f"Score P2 {snake_2.l - 1}",True,WHITE)
            surface.blit(score_1, (20,10))
            surface.blit(score_2, (500,10))

            if level_counter > len(level_names):
                win = True
                lost = True

            pygame.display.flip()
            
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    game_over = True
                    close_menu = False
                    main_menu = False
                    game_run = False
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_SPACE:
                        snakes = {"first_snake" : snake_1,
                        "second_snake" : snake_2 , 
                        "snake_list1" : snake_list_1,
                        "snake_list2" : snake_list_2,
                        "level_cnt" : level_counter,
                        "dif" : difficulty}
                        with open(save_name, 'bw') as f:
                            pickle.dump(snakes, f)

            while lost:
                surface.fill(RED)
                if win:
                    message("You WON!", BLUE,0)
                else:
                    message("You LOST!", BLUE,0)
                message("R to restart",BLUE,80)
                message("Q to menu",BLUE,160)
                pygame.display.update()
                for event in pygame.event.get():
                    if event.type == pygame.KEYDOWN:
                        if event.key == pygame.K_q:
                            game_over = True
                            game_run = False
                            close_menu = True
                            lost = False
                        if event.key == pygame.K_r:
                            walls_point = []
                            level_counter = 0
                            map = ""
                            new_game = True
                            snake_1.update()
                            snake_2.update()
                            food.update()
                            game_over = True
                            game_run = True
                            lost = False
                    if event.type == pygame.QUIT:
                        game_over = True
                        close_menu = False
                        game_run = False
                        main_menu = False
                        lost = False
            FPS.tick(game_speed)