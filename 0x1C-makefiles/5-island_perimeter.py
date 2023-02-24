#!/usr/bin/python3
"""
Module contains island_perimeter function
"""


def island_perimeter(grid):
    """
    Fuction that returns  the perimeter of the island described in grid
    """
    num = 0
    for row in grid:
        for col in row:
            for i in range(col):
                if i == 1:
                    num += 1
                return num * 4
