#!/bin/bash

cat /etc/passwd | sed -e '/^[ \t]*#/d' | rev |sed -n 'n;p' | cut -d ':' -f 3 | sort -r | tr '\n' ',' | sed  's/.$/./'
