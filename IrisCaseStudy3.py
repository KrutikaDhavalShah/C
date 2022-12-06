from sklearn.datasets import load_iris
#from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split
from scipy.spatial import distance 

def euc(a,b):
    return distance.euclidean(a,b)

class MarvellousKNeighborsClassifier:

    def fit(self,trainingdata,trainingtarget):
        self.TrainingData = trainingdata
        self.TrainingTarget = trainingtarget

    def closest(self,row):
        minimumdistance = euc(row,self.TrainingData[0])
        minimumindex = 0

        for i in range(1,len(self.TrainingData)):
            Distance = euc(row,self.TrainingData[i])
            if Distance < minimumdistance:
                minimumdistance = Distance
                minimumindex = i
        return self.TrainingTarget[minimumindex]

    def predict(self,TestData):
        Predictions = []
        for value in TestData:
            result = self.closest(value)
            Predictions.append(result)
        return Predictions


def MarvellousML():
    Dataset = load_iris()                        # 1 : Load the data

    Data = Dataset.data
    Target = Dataset.target

    # 2 :  Manipulate the data                                           ;test_size:keyword argument
    Data_train, Data_Test, Target_train, Target_test = train_test_split(Data,Target,test_size = 0.5)

    Classifier = MarvellousKNeighborsClassifier()  #class cha object tayar kela

    # 3 : Build the Model
    Classifier.fit(Data_train,Target_train)

    # 4 : Test the Model
    Predictions = Classifier.predict(Data_Test)
  
    Accuracy = accuracy_score(Target_test,Predictions)

    # 5 : Improve -- Missing

    return Accuracy

    
def main():
    Ret = MarvellousML()

    print("Acuracy of Iris dataset with KNN is ",Ret * 100)

if __name__ =="__main__":
    main()