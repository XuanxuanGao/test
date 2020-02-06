import numpy as np
import pandas as pd

data = pd.read_csv("file.csv")
X = data['content']
y = data['label']
