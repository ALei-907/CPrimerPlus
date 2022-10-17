CMAKE_MINIMUM_REQUIRED(VERSION 3.21)
PROJECT(CPrimerPlus6 C)

SET(CMAKE_C_STANDARD 99)

ADD_EXECUTABLE(main main.c)

ADD_EXECUTABLE(chapter_3 chapter3/chapter_3.c)
ADD_EXECUTABLE(chapter_4 chapter4/chapter_4.c)
ADD_EXECUTABLE(chapter_14_5_typedef chapter_14/chapter_14_5_typedef.c)
