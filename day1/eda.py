import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import os

file='sales_data.csv'
if not os.path.exists(file):
    print(f'error: {file} not found')
    exit()

df=pd.read_csv('sales_data.csv')
print('successfully')
print(f'shape of dataset = rows {df.shape[0]}.columns:{df.shape[1]}')

print(f"\nHead of the data set\n {df.head()}")
print(f"\nTail of the data set\n {df.tail()}")
print(f"\nDescription of the data set\n {df.describe()}")

print("\nHandling Missing Values:")

print(df.isnull().sum())

# With using Median
median_age = df['Age'].median()
df['Age'] = df['Age'].fillna(median_age)
print('median age ',median_age)


median_spending= df['Spending'].median()
df['Spending']=df['Spending'].fillna(median_spending)
print('median spending ',median_spending)

mean_age = df['Age'].mean()
df['Age']=df['Age'].fillna(mean_age)
print('mean age ',mean_age)

# plt.figure(figsize=(7,4))
# df['Spending'].hist(bins=10,color='skyblue',edgecolor='black')
# plt.title('distribution of spending')
# plt.xlabel('spending amount')
# plt.ylabel('no of categories')
# plt.show()

correlation = df.corr(numeric_only=True)
print(correlation)

# print('plotting correlation heatmap')
# plt.figure(figsize=(8,6))
# sns.heatmap(correlation,annot=True,cmap='coolwarm',fmt='.2f')
# plt.title('correlation heatmap')
# plt.show()

print('find the outliers in age')
outliers = df[df['Age']>100]
print('found outliers')
print(outliers)