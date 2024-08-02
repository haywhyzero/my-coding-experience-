import requests
import re
from bs4 import BeautifulSoup

# we open and also read our Google search API and the Search Engine ID
API_KEYS = open('API_KEY').read()

SEARCH_ID = open('SEARCH_ENGINE_ID').read()

# This code below is used to search through the txt file and rearrange the names and email addresses
# we can work around it and split the email addresses with regex to find the CEOs
"""
import re

with open('emails.txt', 'r') as file:
    content = file.read()

emails = re.findall(r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b', content)
 
for email in emails:
    print(email)

"""


filename = "../../Desktop/codes/comsetmonday.txt"
filename2 = "C:/Users/Hp/AppData/Roaming/JetBrains/PyCharmCE2022.1/scratches/myfirstset.txt"

file = open(filename, "r", encoding='utf-8').readlines()
file2 = open(filename2, 'w', encoding='utf-8')
for line in file:
    file2.write(line + "\n\n")

# contents = file.readlines()

file2.close()

with open(filename2, 'r', encoding='utf-8') as content:
    emails = [line.strip() for line in content.readlines()]
domains = []
for email in emails:
    if email == '':
        continue
    else:
        domain = re.search(r'@(.*)', email).group(1)
        domains.append(domain)
count = 0
for dom in domains:
    count += 1
    print(dom)
print("Total number of domaina: " , count)

# for search in domains:
#     search_word = f"CEO of {search}"
#     search_url = f"https://www.google.com/search?q={search_word}"
#     # params = {
#     #     'key' : API_KEYS,
#     #     'cx' : SEARCH_ID
#     # }
#     response = requests.get(search_url)
#     soup = BeautifulSoup(response.text, 'html.parser')
#     # results = response.json()
#     html = response.text
#     regex_html = re.findall(r'BNeawe', html)
#     print(response)
#     break


























































# EXtract domain names
"""
import re

domains = []
for email in emails:
    domain = re.search(r'@(.*)', email).group(1)
    domains.append(domain)

for domain in domains:
    print(domain)

"""
