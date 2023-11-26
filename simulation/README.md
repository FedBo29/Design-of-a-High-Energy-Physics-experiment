This is the simulation, the first part of the process.

Imagine to be at Cern, the biggest laboratory in th world. LHC is a particle collider where nuclei collide aganist other nuclei
and produce secondary particles. This is done in order to study physics fenomena.
This is what me and Irene do in this simulation.

We simulate the position of the interacting point and from that the generation of secondary particle has been done.
In Monte Carlo simulation you have to do the convolution of different processes with different probability.

We generated 100k events around (0,0,0)cm point in the particle detector. The interacting point has a gaussian distribution 
around zero point. 
So we generate X coordinate, Y coordinate and Z coordinate, with different standard deviation. 
We used a custom class, called MyGen. It Inharited from TRandom3 which is a root class.

After that, secondary particles are produced. But, how many particles? 

The distribution of probability we used for the number of particles generated after the collision is in the .root file 
"heta2.root" in  hmul histogram. It is the distribution of probability of the production of charged particles after the collision. That probability decreases with the number of particles produced. 

In the same root file there is also a second histogram, "heta2". It is the Angle distribution of secondary particles. After the collision, each secondary particle takes a direction, and it will cross along the detector.
So, for each event i.e. a collision, for every secondary particle we pick an angle from that distribution.

In a real particle detector, particles lose energy along the layers. In this assignment, the Hypothesis were:
-high energy physics, so particles loss very few energy along the beam pipe and the two layers ( see Bethe Block law)
-super thin layer (i.e. infinitesimal thickness ) 


