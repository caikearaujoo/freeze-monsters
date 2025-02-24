class Point {
    constructor(x, y) {
        this.x = x;
        this.y = y;
    }
}

// Função para gerar pontos aleatórios
function generateRandomPoints(count, range) {
    let points = [];
    for (let i = 0; i < count; i++) {
        let x = Math.floor(Math.random() * range);
        let y = Math.floor(Math.random() * range);
        points.push(new Point(x, y));
    }
    return points;
}

// Função para encontrar a orientação de três pontos
function orientation(p, q, r) {
    let val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);
    
    if (val == 0) return 0;  // colinear
    return (val > 0) ? 1 : 2; // horário ou anti-horário
}

// Função para encontrar o fecho convexo
function convexHull(points, n) {
    if (n < 3) {
        console.log("Não é possível formar um fecho convexo.");
        return;
    }

    let hull = [];

    // Encontrar o ponto mais à esquerda
    let l = 0;
    for (let i = 1; i < n; i++) {
        if (points[i].x < points[l].x)
            l = i;
    }

    let p = l, q;
    do {
        hull.push(points[p]);
        q = (p + 1) % n;
        for (let i = 0; i < n; i++) {
            if (orientation(points[p], points[i], points[q]) == 2)
                q = i;
        }
        p = q;
    } while (p !== l);

    // Exibir o resultado
    console.log("Fecho convexo:");
    hull.forEach(temp => console.log(`(${temp.x}, ${temp.y})`));
}

// Gerar pontos aleatórios
let points = generateRandomPoints(10000000, 10000000);
let n = points.length;

// Medir tempo de execução
let startTime = performance.now();
convexHull(points, n);
let endTime = performance.now();

console.log(`Tempo de execução: ${(endTime - startTime).toFixed(4)} ms`);
