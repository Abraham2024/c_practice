#!/bin/bash

git add .

read -p "please enter your commit message:" my_message

git commit -m "$my_message"

git push
~        
