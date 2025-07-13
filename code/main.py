import cv2

# Abre la cámara (0 es el índice de la cámara predeterminada)
cap = cv2.VideoCapture(0)

if not cap.isOpened():
    print("No se pudo abrir la cámara")
    exit()

while True:
    # Captura frame por frame
    ret, frame = cap.read()

    if not ret:
        print("No se pudo recibir el frame")
        break

    # Muestra el frame en una ventana llamada 'Cámara'
    cv2.imshow('Cámara', frame)

    # Espera 1 ms y rompe el bucle si se presiona la tecla 'q'
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Libera la cámara y cierra la ventana
cap.release()
cv2.destroyAllWindows()
