import cv2
import matplotlib.pyplot as plt
import random
 
def add_noise(img):
    row,col = img.shape
    salt_noise_pixel = random.randint(800,1000)
    pepper_noise_pixel = random.randint(800,1000)
 
    for i in range(salt_noise_pixel):
        x_corr = random.randint(0,row-1)
        y_corr = random.randint(0,col-1)
        img[x_corr][y_corr] = 2
 
    for i in range(pepper_noise_pixel):
        x_corr = random.randint(0,row-1)
        y_corr = random.randint(0,col-1)
        img[x_corr][y_corr] = 0
 
    return img
 
def main(): 
    img = cv2.imread("img.jpg", cv2.IMREAD_GRAYSCALE)
 
    img2 = add_noise(img)
    cv2.imwrite("salt_and_pepper_image.jpg",img2)
    print("After saving image:")   
  
    print('Successfully saved') 

    print(cv2.__version__)
 
if __name__ == "__main__":
    main()
