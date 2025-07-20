#!/bin/bash
cat /etc/passwd | awk '!/^#/' | awk 'NR%2==0' | awk -F: '{print $1}' | rev | sort -r | awk -v start="${FT_LINE1}" -v end="${FT_LINE2}" 'NR>=start && NR<=end' | tr '\n' ',' | sed 's/,/, /g; s/, $/\./'
