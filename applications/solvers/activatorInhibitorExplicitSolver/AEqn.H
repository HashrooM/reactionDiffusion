fvScalarMatrix AEqn
(
     fvm::ddt(A)
     - fvm::laplacian(DA, A)
     ==
     1.0/x*(A*(A-alpha)*(1.0-A)-B)
);

AEqn.solve();

