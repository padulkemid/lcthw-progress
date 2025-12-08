#!/bin/bash

# need to create a delete mechanism that deletes every compiled app in every
# exercise folder like e.g `ex11/ex11` and keeping only the `Makefile` and the
# `*.c` file.

# Source - https://stackoverflow.com/a/8512497
# Posted by Bennet Yee, modified by community. See post 'Timeline' for change history
# Retrieved 2025-12-07, License - CC BY-SA 4.0

read -p "are you sure you want to delete every compilation? (y/n) " -r

if [[ $REPLY =~ ^[Yy]$ ]]; then
  find ex*/ex* -maxdepth 2 -type f ! -name "*.c" -exec echo "rm -rf {}" \; -exec rm -rf "{}" \;
elif [[ $REPLY =~ ^[Nn]$ ]]; then
  printf "deletion aborted \n"
  exit 1
else
  printf "invalid input. Please enter 'y' or 'n'.\n"
fi

exit 0


