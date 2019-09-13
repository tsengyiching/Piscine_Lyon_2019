#!/bin/bash

git log -5 --format="%H" | cut -d " " -f 2
