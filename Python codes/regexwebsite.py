import re
emails=['http://youtube.com','http://www.twitter.com']
regex_criteria=r'(http)s?(://)(www)?\.?\w*\.\D{3}'
criteria=re.compile(regex_criteria)
for item in emails:
    if (criteria.fullmatch(item)):
        print("The website is:\t",item)