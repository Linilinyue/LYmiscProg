import pandas as pd
import random

if __name__ == '__main__':
    # file = pd.read_excel('./namelist.xlsx')
    file = pd.read_csv('./namelist.csv')
    name = file['name'].tolist()
    random.seed()
    chosenone = random.choice(name)
    print(chosenone.encode('utf-8').decode('utf-8'))

    # if the Chinese characters does not show correctly, try this:
    # type in the python console(in the bottom of the pycharm UI):
    #   import sys
    #   sys.stdout.encoding
    # then google it and change the 10th line