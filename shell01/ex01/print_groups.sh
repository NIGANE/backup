#!/bin/bash
if [ "$FT_USER" = "bocal" ]; then
    id -nG "$FT_USER"
elif [ "$FT_USER" = "daemon" ]; then
    id -nG "$FT_USER" | tr ' ' ',' 
fi

