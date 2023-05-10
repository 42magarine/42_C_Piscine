#!/bin/sh
ifconfig | grep '^\t*ether ' | awk '{print $2}'
#need to learn how to use basic AWK commands so I can explain this one
