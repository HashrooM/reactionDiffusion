fvScalarMatrix BEqn
(
     fvm::ddt(B)
     - fvm::laplacian(DB, B)
     ==
     1.0/y*(A-gamma*B)
);

BEqn.solve();

