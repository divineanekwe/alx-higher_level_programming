#!/usr/bin/python3
import math


class MagicClass:
    """Defines a Magic Class """
    def __init__(self, radius):
        self.__radius = 0
        if type(radius) is not int and type(radius) is not float:
            raise TypeError('radius must be a number')
        self.__radius = radius

    def area(self, radius):
        """Returns area of a circle"""
        return self.__radius ** 2 * math.pi

    def circumference(self, radius):
        """Returns circumference of a circle"""
        return 2 * math.pi * self.__radius
