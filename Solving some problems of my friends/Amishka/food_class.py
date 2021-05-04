import pygame,random
class Food():
    def __init__(self,surface,block_size,WIDTH,HEIGHT):
        self.surface = surface
        self.size = block_size
        self.w = WIDTH
        self.h = HEIGHT
        self.image = pygame.image.load("berry.png")
        self.x = round(random.randrange(self.size * 2, self.w - self.size * 2) / float(self.size)) * float(self.size)
        self.y = round(random.randrange(self.size * 2, self.h - self.size * 2) / float(self.size)) * float(self.size)
        self.position = (self.x,self.y)
    def draw(self):
        self.surface.blit(self.image,(self.x, self.y))
    def update(self):
        self.x = round(random.randrange(self.size * 2, self.w - self.size * 2) / float(self.size)) * float(self.size)
        self.y = round(random.randrange(self.size * 2, self.h - self.size * 2) / float(self.size)) * float(self.size)
        self.position = (self.x,self.y)