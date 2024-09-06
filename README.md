[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/MVpnOf12)
# ECE231_Assignment1
Intro to Git and Coding

# Lab Assignment 1
For this lab assignment we will be using Git, cloning our first repository, and pushing the results to github.  you will need to create a github account if you have not yet created one.  www.github.com

# Github keys
You need to generate a public/private keypair to clone and push your repository to and from github.  The steps are something like as follows:

1. From the machine you are working on, ensure the ssh-agent is alive - type ssh-agent to get information.  If not, use eval \`ssh-agent\` (these ` symbols are your ~ key)
2. Type ssh-keygen -t ed25519 -C "your@email" - you can use the default directories and give a password if you like, but usually it is best to leave it empty
4. From your profile picture and settings on github.com (not classroom.github.com) - this icon is in the top right of your homepage at github.com, click 'SSH and GPG Keys' on the left hand side menu
5. Click 'Add new SSH Key'
6. In your terminal, type cat ~/.ssh/id_ed25519.pub
7. Copy this key exactly and paste into the key box in github
8. Click add

You should be set up at this point.  And you will only need to do this step once.  Every time you open your terminal, you will likely need to complete the following 2 steps:
1. eval \`ssh-agent\`
2. ssh-add ~/.ssh/id_ed25519

Then all your git commands should work with your remote repository.

# Cloning your repository
From the assignment page on classroom.github, you will be able to find the repository checkout link by clicking <> Code, clicking the ssh button and copying the link. 

It should look something like this: git@github.com:unmece231/assignment_name_username.git

Type git clone git@github.com:unmece231/assignment_name_username.git to clone the repository to your local machine

start working and playing around with git add, git status, git commit, and git push.  Once pushed, you can view the changes on the github website.

# Simple program
Make a simple program that contains a main.c file and create multiple functions that takes an array of arbitrary length of numbers and adds them, calculates the average, and finds the standard deviation. Use 3 different arrays (size and values) to calculate the average, standard deviation, and sum.

```
./main
the average is: x
the std is: x
the sum is: x
```

# Grading Scale
code compiles: 30%

3 functions implemented: 40%

code produces expected output: 30%

total: 100%
