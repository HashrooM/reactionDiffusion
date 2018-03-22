fvScalarMatrix CEqn
(
     fvm::ddt(C)
     - fvc::laplacian(DC, C)
     ==
     (1/tau)*C*(1-C*C)
);

CEqn.solve();

