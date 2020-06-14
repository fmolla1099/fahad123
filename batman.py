from wordcloud import WordCloud, STOPWORDS, ImageColorGenerator
import matplotlib.pyplot as plt #to display our wordcloud
from PIL import Image #to load our image
import numpy as np #to get the color of our image


#Content-related
text = open('batman.txt', 'r').read()

#Appearance-related
wc = WordCloud(background_color = 'white', max_font_size = 50, max_words = 100)
wc.generate(text)

#Plotting
plt.imshow(wc, interpolation = 'billnear')
plt.axis('off')
plt.show()
