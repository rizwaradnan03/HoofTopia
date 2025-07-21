<!-- INITIALIZATION -->
SDL_Init(SDL_INIT_EVERYTHING); = inisialisasi SDL
SDL_CreateWindow("title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN); = membuat window baru dengan komposisi judul, letak x, letak y, lebar, tinggi, muncul

<!-- RENDERING -->
SDL_SetRenderDrawColor(render, 0, 255, 0, 255); = set render warna hijau dengan komposisi rgb dan alamat dari render
SDL_RenderClear(renderer); = menghapus tampilan pada alamat render
SDL_RenderPresent(renderer); = melakukan render terhadap keseluruhan yang sudah disepakati
SDL_RenderFillRect(renderer, rect) = menyatakan ukuran terhadap sebuah bentuk objek

<!-- DESTROYER -->
SDL_DestroyRenderer(renderer); = menghapus alamat render beserta isinya
SDL_DestroyWindow(window); = menutup windows
SDL_Quit(); = keluar dari command prompt