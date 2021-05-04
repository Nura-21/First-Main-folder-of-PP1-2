import pygame
class Snake():
    def __init__(self,spawn_point,surface,block_size):
        self.crd = spawn_point
        self.surface = surface
        self.size = block_size
        self.x, self.y = self.crd[0], self.crd[1]
        self.dx,self.dy = 0 , 0
        self.l = 1
        self.elements = []
        self.direction = 5
    def update(self):
        self.x, self.y = self.crd[0], self.crd[1]
        self.dx,self.dy = 0 , 0
        self.l = 1
        self.elements = []
        self.direction = 5
    def draw(self,block_size, snake_list,colour):
        for x,y in snake_list:
            pygame.draw.rect(self.surface, colour, [x,y,block_size,block_size])
    def move(self,keys,buttons):
        if (keys[buttons["RIGHT"]] and self.direction != 1):
                self.direction = 0   
        if (keys[buttons["LEFT"]] and self.direction != 0):
                self.direction = 1 
        if (keys[buttons["UP"]] and self.direction != 3):
                self.direction = 2  
        if (keys[buttons["DOWN"]] and self.direction != 2):
                self.direction = 3
        if self.direction == 0: self.dx, self.dy =  self.size, 0
        elif self.direction == 1: self.dx, self.dy = -self.size, 0
        elif self.direction == 2: self.dx, self.dy = 0, -self.size
        elif self.direction == 3: self.dx, self.dy = 0, self.size 
        self.x += self.dx
        self.y += self.dy