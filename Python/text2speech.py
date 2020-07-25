from gtts import gTTS
import os

myText = "Text to speech"
Language = 'en'
output = gTTS(text=myText, lang=Language, slow=False)
output.save("output.mp3")
os.system("start output.mp3")
