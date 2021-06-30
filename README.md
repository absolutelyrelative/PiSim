This is an example of Probability analysis more than a fully-fledged project encompassing multiple software development practices, but it was still very interesting to tackle on the board, and then programmatically!

For the record, this method can be used to approximate the values of integrals which are impossible to solve analytically (Look up Monte Carlo method!)
# PiSim
Did you know that you can approximate the value of Pi with rain?

Okay, this is an extreme case, but coincidentally the only way to obtain possibly real Random values is in nature, making calculating Pi with rain a great option, if you have...a lot of time to spare.

But we'll simulate the rain drops.

# The Math behind it
If we project onto a 2-Dimensional plane two Aleatory Variables uniformly distributed in a 1x1 square (that is, each point in the square has the same probability of happening), we obtain the following area:
![alt text](https://raw.githubusercontent.com/absolutelyrelative/PiSim/main/img_1.png)

If we then draw a unitary circle, we can then calculate the probability that our rain drops would fall within the circle as opposed to those who wouldn't, specifically:
![alt text](https://raw.githubusercontent.com/absolutelyrelative/PiSim/main/img_2.png)

![alt text](https://raw.githubusercontent.com/absolutelyrelative/PiSim/main/img_3.png)

And thus it becomes apparent why we multiply the end result by four.




# Instructions
Build the .c program and run it.

Output example:
Hello, World!
3.139200
Process finished with exit code 0
