import requests
import pprint

# get()メソッドでGETリクエストを送信する
response = requests.get("https://2e24-163-221-190-208.ngrok-free.app/")

# 結果を出力する
pprint.pprint(vars(response))

