import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import os

file='sales_data.csv'
if not os.path.exists(file):
    print(f'error: {file} not found')
    exit()

df=pd.read_csv('sample.csv')
print('successfully loaded')
print(f'shape of dataset {}')