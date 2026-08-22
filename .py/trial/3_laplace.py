# import numpy as np
# import matplotlib.pyplot as plt

# a = -0.5
# b = 1

# t = np.linspace(0,20,1000)
# z = np.exp((a + 1j*b)*t)

# plt.plot(z.real, z.imag)
# plt.xlabel("Real")
# plt.ylabel("Imag")
# plt.title("e^(st) in Complex Plane")
# plt.axhline(0)
# plt.axvline(0)
# plt.gca().set_aspect('equal')
# plt.show()

         #*#
# import numpy as np
# import matplotlib.pyplot as plt
# import matplotlib.animation as animation

# a = -0.5
# b = 1

# t = np.linspace(0,20,1000)
# z = np.exp((a + 1j*b)*t)

# fig, ax = plt.subplots()
# ax.set_aspect('equal')
# ax.set_xlim(-2,2)
# ax.set_ylim(-2,2)

# line, = ax.plot([], [])
# point, = ax.plot([], [], 'ro')

# def update(frame):
#     line.set_data(z.real[:frame], z.imag[:frame])
#     point.set_data(z.real[frame], z.imag[frame])
#     return line, point

# ani = animation.FuncAnimation(fig, update, frames=len(t), interval=20)

# plt.show()


'''
*
'''
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation

# ---- Parameters ----
a = -0.5     # real part (decay/growth)
b = 1        # imaginary part (rotation speed)

# ---- Time ----
t = np.linspace(0, 20, 1000)

# ---- Complex exponential ----
z = np.exp((a + 1j*b) * t)

# ---- Create figure ----
fig, ax = plt.subplots()
ax.set_aspect('equal')
ax.set_xlim(-2, 2)
ax.set_ylim(-2, 2)
ax.set_xlabel("Real")
ax.set_ylabel("Imag")
ax.set_title("Animation of e^(st) in Complex Plane")

# ---- Initialize line and moving point ----
line, = ax.plot([], [], lw=2)
point, = ax.plot([], [], 'ro')

# ---- Update function ----
def update(frame):
    line.set_data(z.real[:frame], z.imag[:frame])
    point.set_data([z.real[frame]], [z.imag[frame]])
    return line, point

# ---- Animation ----
ani = animation.FuncAnimation(
    fig,
    update,
    frames=len(t),
    interval=20,
    blit=True
)

plt.show()