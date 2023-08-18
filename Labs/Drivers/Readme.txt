Assumptions made:
	1. As given in the problem statement, we have used PortC for motor velocity control and PortD for motor enable
	2. We have used portD pin 2 i.e external interrupt 1 for the color sensor
	3. We have taken color sensor readings for a duration of 100ms per color in each iteration of the loop. In order to 	arrive at this value we tried various values like 50ms and 200ms and chose the one that gave a better output overall
	4. We made use of the serial port available in Arduino for debugging

Problems faced:
	The color sensor showed some unexpected behavior. It seemed to be more sensitive to red color than green or blue. Upon scanning a green or a blue sheet the color sensor gave a very high value to red(nearly 5 times the remaining two) in every second iteration. We tried things like scaling down the red value by some factor, setting an upper limit on the red value, etc but none of them worked very well

Video link:- https://drive.google.com/drive/folders/1rhRa3UBLGLKU0W7WY4wHTd2EOmaK3ndb?usp=sharing