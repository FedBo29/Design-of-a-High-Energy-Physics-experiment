This is the simulation, the first part of the process.

Imagine to be at Cern, the biggest laboratory in th world. LHC is a particle collider where nuclei collides aganist other nuclei
and produce secondary particles.
This is what me and Irene do in this simulation.

We simulate the position of the interacting point and from that the generation of secondary particle has been done.
In MonteCarlo simulation you have to do the convolution of different processes with different probability.

We generated 100k events around (0,0,0)cm point in the particle detector. The interacting point has a gaussian distribution 
around zero point. 
So we generate X coordinate, Y coordinate and Z coordinate, with different standard deviation. 

After that, secondary particles are produced. But, how many particles? 

The distributio of probability we used for the number of particles generated after the collision is in the .root file 
"heta.root"

