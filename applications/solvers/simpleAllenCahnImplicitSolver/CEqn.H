fvScalarMatrix CEqn
(
     fvm::ddt(C)
     - fvm::laplacian(DC, C)
     ==
     1/tau * fvm::Sp((1-C*C),C)
);

CEqn.solve();

