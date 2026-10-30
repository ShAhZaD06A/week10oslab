
#!/bin/bash

echo "Enter file name:"
read filename

if [ -f "$filename" ]
then
    echo "File Size:"
    stat -c %s "$filename"

    echo "File Permissions:"
    stat -c %A "$filename"

    echo "Last Modified Date:"
    stat -c %y "$filename"
else
    echo "File does not exist"
fi
