import pygame
import sys
import math
WIDTH = 700
HEIGHT = 700
xrange_in_pixels = WIDTH - 100
kx =  xrange_in_pixels / (6 * math.pi)
A = 150
ky =  2 * A  / 2
print(kx)
def get_points(function, xrange, step, kx, ky, move):
    colichestvo = math.ceil((xrange[1] - xrange[0]) / step)
    #print(all_numbers) 
    all_x = (i * step + xrange[0] for i in range(colichestvo))
    #print(all_x)  
    pre_points = ((kx * x, ky * function(x)) for x in all_x)
    #print(pre_points)
    points = tuple(map(lambda x: (x[0] + move[0], -x[1] + move[1]), pre_points))
    return points
get_points(math.cos, (-3 * math.pi , 3 * math.pi) , 0.2, 1 , 1, (WIDTH // 2 , HEIGHT // 2))


for x in range(all_numbers):
    x * step + xrange[0]

for x in all_x:
    pre_points.append((kx * x , ky * function(x)))
    #(x , y ) y = f(x)  >>  f = cos ; all_x >> x         ::     y = cos(x)


#Adamsha til
def get_points(f, xrange, step  = 0.2, kx , ky , move_to):
    colichestvo = math.ceil((xrange[1] - xrange[0]) / step)
    all_x = []
    for i in range(colichestvo):
        all_x.append(i * step + xrange[0])
    pre_points = []
    for x in all_x:
        pre_points.append( (x * kx , f(x) * ky))
    points = []
    for point in pre_points:
        points.append((point[0] + move_to[0] , -point[1] + move_to[1]))
    return points