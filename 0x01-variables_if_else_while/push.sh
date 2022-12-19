#!/bin/bash

# add all files to staging area
git add .

# get the name of the newest file in the current directory
newest_file=$(ls -t | head -1)

# commit the changes with the name of the newest file as the commit message
git commit -m "$newest_file"
echo $newest_file
# push the changes to the remote repository
git push

# print a success message
echo "Changes successfully pushed to the repository!
