#job application bamboo barnes and noble product details webscraper



import requests
from bs4 import BeautifulSoup

headers = requests.utils.default_headers()
headers.update({
    'User-Agent': 'Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:52.0) Gecko/20100101 Firefox/52.0',
})
URL = "https://www.barnesandnoble.com/w/effective-python-brett-slatkin/1130203296"
page = requests.get(URL,timeout=25,headers=headers)

soup = BeautifulSoup(page.content, "html.parser")
results = soup.find(id="ProductDetailsTab")
#print(results.text)
results1 = soup.find(id="formatSelect")
#print(results1.text)
results2 = results.text.strip() + "\n" + results1.text.strip()
#print(results2)
x = results2.splitlines(True)
#print(x)
convert = []

for element in x:
    convert.append(element.strip())

#print(convert)
res = list(filter(None, convert))
print(res)
#make code that removes first unnecessary Product Details value
#code that removes last unnecessary View All Alailable Formats value
#code that combines the 2 prices, then inserts a "Price" element before it.
#import pymongo

#myclient = pymongo.MongoClient("mongodb://localhost:27017/")
#mydb = myclient["mydatabase"]
#mycol = mydb["customers"]

#mydict = { loop involving the res list and insert each value}
            ele 1: ele 2
#y = mycol.insert_one(mydict)


#sources:
#https://realpython.com/beautiful-soup-web-scraper-python/
#https://stackoverflow.com/questions/43440397/requests-using-beautiful-soup-gets-blocked
#https://www.w3schools.com/python/python_ref_string.asp
#https://www.w3schools.com/python/python_ref_list.asp
#https://www.w3schools.com/python/python_mongodb_create_db.asp
#https://www.w3schools.com/python/python_mongodb_create_collection.asp
#https://www.w3schools.com/python/python_mongodb_insert.asp
#https://www.w3schools.com/python/python_ref_dictionary.asp
#https://www.w3schools.com/python/ref_string_splitlines.asp
#https://tutorial.eyehunts.com/python/python-remove-empty-elements-from-list-example-code/
#https://www.kite.com/python/answers/how-to-remove-newline-character-from-a-list-in-python
#https://docs.python-requests.org/en/latest/user/quickstart/
#https://packaging.python.org/en/latest/tutorials/installing-packages/
