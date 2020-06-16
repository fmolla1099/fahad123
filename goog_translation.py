from googletrans import Translator, LANGUAGES
song = '''
Imagine there's no coutries
It isn't hard to do
Nothing to kill or die for
And no religion too
Imagine all the people living life in peace
'''
my_languages = ['it','fr','de','es','en']
for language in my_languages:
    t = Translator().translator(song, dest = language)
    print(language + '-' + LANGUAGES[languages])
    print(t.text)
    song = t.text
    print()
