# Interactive-Coffee-Table-Game
Code controlling interactive coffee table LED's 


OBJECT FINAL: INTERACTIVE COFFEE TABLE
Interactive Coffee Table Documentation

Our initial idea for the table was to make it interactive, but also make a fun game out of the interaction that more than one person could participate in. The project would consist of mainly two parts. One part was the fabrication of the table itself, and the second part was the electronics and coding of the arduino.

We started off by gathering all the supplies we would need. We used Amazon for the electronics, and went to Home Depot in order to buy the wood and acrylic that we used for the table. The following is a list of everything we bought for the project.

Home Depot:

2.5’x 8’x .25” plywood (table platforms)
2”x 2”x 8’ wooden post (table legs)
.5”x 5”x 8’ wood (table sides)
4’x 4’x .125” acrylic sheet (table top)
Amazon:

Arduino Mega Board
16 IR Proximity sensors
Neopixel strip (at least 16 seperate neopixels)
Copper wire
We first set out to assemble the actual tabletop itself, and the setting up the electronics for installation. We cut 2 2’x2’ squares out of the plywood sheets. These two squares will act of the bottom of the table, and the mid level of the table, on which all of the electronics would be mounted. We then cut the sidewall pieces and the table leg pieces into fourths. We then sanded down all of our wooden pieces to make them easier to work with, and look at.

Next we assembled the main part of the table, which included the bottom consisting of one of the plywood sheets, and the sidewalls. We used wood glue to secure the sidewalls to the outer edges of the bottom of the table, and clamped them down for 24 hours. The following is a picture of the glued sidewalls.



Next we needed to make the grid which would separate each of the 16 neopixels. We used some of the remaining plywood we had and cut 6 strips to fit the inside of the box, and cut notches in them in order to make them join together without having to cut and glue them individually. Below is the picture of the strips, and how they assemble with each other.


In order to make room for the Arduino Mega Board in the table, we would need to make two platforms inside. The first was the bottom plywood sheet shown earlier, and the next we a slightly smaller plywood sheet, that we cut in order to fit inside the sidewalls. We suspended this sheet from 4 small blocks that we glues into the corners of the base of the table. Below is a picture of the second plywood sheet suspended in the box, as well as the grid laying on top.


Now we had to focus on preparing this top wooden platform to be able to install the electronics in. We drilled holes in each of the 16 squares of the grid, in order feed the wires through that connect the neopixels to each other and the power source, as well as connect the IR sensors to the Arduino and the power source.


For the power source, we hot glues copper wire to the bottom of the suspended board, that will be connected to the 5v power and GND pins on the arduino. This way, we can connect all the neopixels and IR sensors to power, even though there aren’t 32 5v pins on the Arduino. Below is a picture of the suspended board with holes drilled for the wires of the neopixels and IR sensors, as well as the copper wire power and ground bars that were hot glued on.


Next, we prepared the electronics to make them compatible with the table. We cut 16 separate neopixels and soldered wires to their data, power and ground leads, and did the same for the IR sensors.  For the IR sensors, we also cut off the LED and soldered back on with longer wire, which allowed us to manipulate the angle of reflection in order to tune the sensors to register when there is an object sitting on top of them. Pictures of these processes are included below.  



The next, and most difficult part of the project, was feeding all the wires through the holes, and connecting all of them to their corresponding leads. We connected the first neopixel to the Arduino, and then chained the neopixels together subsequently all throughout the rest of the board. This soldering was difficult, because the copper pads of the neopixels were so small. Then, we needed to adjust the lengths of the data wires connecting the IR sensors to the Arduino, because each sensor is a different length away from the Arduino that is mounted to the underside of the suspended board. We then connected the power and GND wires of each neopixel, and IR sensor to their respective copper wire power bars. After many hours of soldering, testing, and resoldering, we finally got all the neopixels to be responsive, as well as the IR sensors. Below are pictures of the top and bottom side of the suspended top board, along with the neopixels and IR sensors installed. There is also a diagram for our circuit below.




Now all that was left to do was to finish the final pieces of the table. We glued on the legs of the table, as well as some supportive triangle joint to keep them from breaking or bending. A picture of the legs joints is included below.


Finally, we cut an the acrylic sheet to size in order to fit inside the table, on top of the grid. This is where the users will place their cups, and will allow the IR sensors to detect them from the suspended board inside the table. A picture of the final constructed table is included below, as well as a demo video showing the objects interaction.

https://drive.google.com/open?id=1JNo7SxrE9YvdyJ_5M1k-tyE71CflRdi1


There are 2 lighting modes for the table. The first mode is active when no objects are placed on the table. The other mode is the game mode, in which one random square will highlight green, and players at the table have to race to be the first one to place their cup their. After a period of time, the square will change to a new spot, and the game will continue. Until the table stops detective objects on top of it, the game will continue. The code for controlling the lights in the table is included below.
