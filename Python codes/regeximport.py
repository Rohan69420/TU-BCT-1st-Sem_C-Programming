import re
bunch=['import re','from selenium import webdriver','false alarm','import pyperclip as file','impor ouioui']
match_regex=r'(from)?\s?\D*?\s?(import)\s\D*\s?(as)?\s?\D*'
the_regex=re.compile(match_regex)
for item in bunch:
    if (the_regex.fullmatch(item)):
        print("Here's the import line:\t",item)