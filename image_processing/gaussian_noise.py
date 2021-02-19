import numpy as np
import cv2
from matplotlib import pyplot as plt
 
def mat2gray(img):
    A = np.double(img)
    out = np.zeros(A.shape, np.double)
    normalized = cv2.normalize(A, out, 1.0, 0.0, cv2.NORM_MINMAX)
    return out
 
 #Add noise to the image
def random_noise(image, mode='gaussian', seed=None, clip=True, **kwargs):
    image = mat2gray(image)
    
    mode = mode.lower()
    if image.min() < 0:
        low_clip = -1
    else:
        low_clip = 0
    if seed is not None:
        np.random.seed(seed=seed)
        
    if mode == 'gaussian':
        noise = np.random.normal(kwargs['mean'], kwargs['var'] ** 0.5,
                                 image.shape)        
        out = image  + noise
    if clip:        
        out = np.clip(out, low_clip, 1.0)
        
    return out
 #Read picture
img = cv2.imread('img.jpg',0)
 #Add Gaussian noise
img1 = random_noise(img,'gaussian', mean=0.25,var=0.01)
img1 = np.uint8(img1*255)
#
cv2.imwrite("gaussian_noise_image.jpg",img1)
cv2.imshow('img', img)
cv2.imshow('img1', img1)
 
#
cv2.waitKey(0)
cv2.destroyAllWindows()
