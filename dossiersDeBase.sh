#!/bin/bash

echo "Nom du projet:"
read projet
mkdir $projet

echo "#include <stdlib.h>
#include <stdio.h>

main()
{
    
    exit(0);
}" >> $projet/main.c

echo "#include <stdlib.h>
#include <stdio.h>

()
{
	
}">> $projet/$projet.c

echo "#ifndef ___H__
#define ___H__

;

#endif">> $projet/$projet.h

echo "#Makefile
NAME = $projet 

SRCS = main.c \\
	$projet.c \\
    .c

all: \$(NAME)

\$(NAME): \$(SRCS)
	gcc \$(SRCS) -o \$(NAME)

fclean:
	rm -f \$(NAME)

re: fclean all">> $projet/Makefile