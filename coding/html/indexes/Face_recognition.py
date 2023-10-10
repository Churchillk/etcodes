#Write a python program that recognizes faces

#import the necessary packages
import cv2

#Load the cascade
face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')

#To capture video from webcam. 
cap = cv2.VideoCapture(0)

#Loop
while 1: 
    #read the frame
    ret, img = cap.read()
    #convert to grayscale
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    #Detect the faces
    faces = face_cascade.detectMultiScale(gray, 1.3, 5)
    #Draw the rectangle around each face
    for (x,y,w,h) in faces:
        cv2.rectangle(img,(x,y),(x+w,y+h),(255,0,0),2)
    #Display
    cv2.imshow('img',img)
    #Stop if 'q' is pressed
    k = cv2.waitKey(30) & 0xff
    if k == ord('q'):
        break
#Release the capture
cap.release()
cv2.destroyAllWindows()