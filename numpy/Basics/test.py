import numpy as np
print("Numpy", np.__version__)
try:
    import sysconfig
    print("OpenBLAS/LAPACK info: ", sysconfig.get_config_var('BLAS'))
except Exception:
    pass
