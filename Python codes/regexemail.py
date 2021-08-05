import re
to_match=['roro@gmail.com','wuddap','thisdude.69@pcampus.edu.np']
regex_string=r'\w*\.?\w*[@]\w*\.\w*\.?\w*?'
the_regex=re.compile(regex_string)

for item in to_match:
    if (the_regex.fullmatch(item)):
        print("item found is \t",item)
        