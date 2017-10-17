import numpy as np
import math, cmath
def test():
	c = complex(0.3, -0.4)
	for i in range(0,1000):
		for j in range(0,1000):
			z = complex(-2+i*4/1000, -1+j*3/1000)
			for k in range(0,100):
				if abs(z) > 2: break
				z = z*z + c
			if abs(z)<=2: print(z)

def test2():
	c = complex(0.3, -0.4)
	z = complex(0.9, 0.75)
	for i in range(0,10):
		z = np.sqrt(z-c)
		print(z)
	print("-----")
	for i in range(0,10):
		z = z*z + c
		print(z)


def main():
	f = open("julia.txt","wt")
	c = complex(0.3,-0.4)
	da = 4.0/999.0
	db = 3.0/999.0
	for i in range(0,1000):

		for j in range(0,1000):
			z = complex(-2+i*da, -1+i*db)

			for k in range(0,100):
				z = z**2 + c

			if abs(z) <= 2:
				print(-2+i*da, -1+i*db)
	f.close()


if __name__ == '__main__':
	test()
