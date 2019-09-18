#importing the libraries
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

#importing the dataset
dataset=pd.read_csv('P:\dataset.csv')
X=dataset.iloc[:,:-1].values
Y=dataset.iloc[:,3].values

#Take care of missing data
from sklearn.preprocessing import Imputer
import warnings
warnings.filterwarnings('ignore')
imputer=Imputer(missing_values='NaN',strategy='mean',axis=0)
imputer=imputer.fit(X[:,1:3])
X[:, 1:3]=imputer.transform(X[:, 1:3])

#encode categorical data
from sklearn.preprocessing import LabelEncoder, OneHotEncoder
LabelEncoder_X=LabelEncoder()
X[:,0]=LabelEncoder_X.fit_transform(X[:,0])
onehotencoder=OneHotEncoder(categorical_features=[0])
X=onehotencoder.fit_transform(X).toarray()
LabelEncoder_Y=LabelEncoder()
Y=LabelEncoder_Y.fit_transform(Y)

#splitting train and test set
from sklearn.model_selection import train_test_split
X_train,X_test,Y_train,Y_test=train_test_split(X,Y,test_size=0.2,random_state=0)

#feature scaling
#to make the data comparable we do feature scaling
from sklearn.preprocessing import StandardScaler
sc_X=StandardScaler()
X_train=sc_X.fit_transform(X_train)
X_test=sc_X.fit_transform(X_test)


