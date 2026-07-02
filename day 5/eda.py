import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

df=pd.read_csv('data.csv')

print(df.head())
print(df.tail())
print(df.info())
print(df.describe())

print(f'Rows : {df.shape[0]}')
print(f'Columns : {df.shape[1]}')

x=df['Runs']
y=df['Player']
plt.figure(figsize=(10,6))
plt.scatter(x,y)
plt.title('runs to player')
plt.xlabel('Runs')
plt.ylabel('Player')
plt.show()

corr=df.corr()
sns.heatmap(corr,cmap='coolwarm',random_state=42)
plt.figure(figsize=(8,6))
plt.title('Corr relation matrix')
plt.legend()
plt.show()

