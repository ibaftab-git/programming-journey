from selenium import webdriver
from selenium.webdriver.chrome.options import Options

options = Options()

options.binary_location = r"C:\Program Files\BraveSoftware\Brave-Browser\Application\brave.exe"

driver = webdriver.Chrome(options=options)

driver.get("https://www.aktubrand.online/result")

input("Press Enter to close...")
driver.quit()